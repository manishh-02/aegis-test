// app.js
const express = require("express");
const app = express();

app.get("/run", (req, res) => {
  const code = req.query.code;

  const result = eval(code); // unsafe eval
  res.send(String(result));
});

app.listen(3000);
