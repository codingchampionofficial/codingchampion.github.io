const express = require('express');
const bodyParser = require('body-parser');
const { exec } = require('child_process');

const app = express();
const PORT = process.env.PORT || 3000;

app.use(bodyParser.json());

app.post('/compile', (req, res) => {
  const { language, code } = req.body;
  let command, filename;

  if (language === 'c') {
    filename = 'program.c';
    command = `gcc -o program ${filename} && ./program`;
  } else if (language === 'java') {
    filename = 'Main.java';
    command = `javac ${filename} && java Main`;
  } else {
    return res.status(400).json({ error: 'Unsupported language' });
  }

  // Write code to file
  require('fs').writeFileSync(filename, code);

  // Execute the command
  exec(command, (error, stdout, stderr) => {
    if (error) {
      res.status(400).json({ output: stderr });
    } else {
      res.json({ output: stdout });
    }
  });
});

app.listen(PORT, () => {
  console.log(`Server is running on http://localhost:${PORT}`);
});
